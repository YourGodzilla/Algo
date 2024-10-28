import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class TodoListApp {
    static String fileName;
    static ArrayList<String> todoLists;
    static boolean isEditing = false;
    static Scanner input;

    public static void main(String[] args) throws IOException, InterruptedException {
        todoLists = new ArrayList<>();
        input = new Scanner(System.in);

        String filePath = System.console() == null ? "/src/todolist.txt" : "/todolist.txt";
        fileName = System.getProperty("user.dir") + filePath;

        System.out.println("FILE: " + fileName);

        while (true) {
            showMenu();
        }
    }

    static void clearScreen() throws IOException, InterruptedException {
        try {
            final String os = System.getProperty("os.name");
            if (os.contains("Windows")) {
                new ProcessBuilder("cmd","/c","cls")
                .inheritIO()
                .start()
                .waitFor();
            } else {
                //Runtime.getRuntime().exec("clear");
                System.out.println("\033[H\033[2J");
                System.out.flush();
            }
        } catch (IOException e) {
            System.out.println("Error karena : " + e.getMessage());
        }
    }

    static void showMenu() throws IOException, InterruptedException {
        System.out.println("=== TODO LIST APP ==");
        System.out.println("[1] Lihat Todo List");
        System.out.println("[2] Tambah Todo List");
        System.out.println("[3] Edit Todo List");
        System.out.println("[4] Hapus Todo List");
        System.out.println("[0] Keluar");
        System.out.println("--------------------------");
        System.out.print("Pilih menu> ");

        String selectedMenu = input.nextLine();

        if (selectedMenu.equals("1")) {
            showToDoList();
        } else if (selectedMenu.equals("2")) {
            addToDoList();
        } else if (selectedMenu.equals("3")) {
            editToDoList();
        } else if (selectedMenu.equals("4")) {
            deleteToDoList();
        } else if (selectedMenu.equals("0")) {
            System.exit(0);
        } else {
            System.out.println("Kamu salah pilih menu!");
            backToMenu();
        }
    }

    static void backToMenu() throws IOException, InterruptedException {
        System.out.println("");
        System.out.println("Tekan [Enter] untuk kembali..");
        input.nextLine();
        clearScreen();
    }

    static void readToDoList() {
        try {
            File file = new File(fileName);
            Scanner fileReader = new Scanner(file);
            todoLists.clear();
            while(fileReader.hasNextLine()) {
                String data = fileReader.nextLine();
                todoLists.add(data);
            }
        } catch (FileNotFoundException e) {
            System.out.println("Error karena : " + e.getMessage());
        }
    }

    static void showToDoList() throws IOException, InterruptedException {
        clearScreen();
        readToDoList();
        if (todoLists.size() > 0) {
            System.out.println("TODO LIST: ");
            int index = 0;
            for (String data : todoLists) {
                System.out.println(String.format("[%d] %s", index, data));
                index++;
            }
        } else {
            System.out.println("Data tidak ada!");
        }

        if (!isEditing) {
            backToMenu();
        }
    }

    static void addToDoList() throws IOException, InterruptedException {
        clearScreen();

        System.out.println("Apa yang ingin kamu kerjakan??");
        System.out.println("Jawab: ");
        String newTodoList = input.nextLine();

        try {
            FileWriter fileWriter = new FileWriter(fileName, true);
            fileWriter.append(String.format("%s%n", newTodoList));
            fileWriter.close();
            System.out.println("Berhasil Ditambahkan!!");
        } catch (IOException e) {
            System.out.println("Terjadi kesalahan karena : " + e.getMessage());
        }

        backToMenu();
    }

    static void editToDoList() throws IOException, InterruptedException {
        isEditing = true;
        showToDoList();
        
        try {
            System.out.println("---------------------------");
            System.out.println("Pilih Indeks> ");
            int index = Integer.parseInt(input.nextLine());

            if (index > todoLists.size()) {
                throw new IndexOutOfBoundsException("Kamu memasukan data yang salah!!");
            } else {
                System.out.print("Data baru: ");
                String newData = input.nextLine();

                todoLists.set(index, newData);

                System.out.println(todoLists.toString());

                try {
                    FileWriter fileWriter = new FileWriter(fileName, false);

                    for (String data : todoLists) {
                        fileWriter.append(String.format("%s%n", data));
                    }
                    fileWriter.close();

                    System.out.println("Berhasil diubah!!");
                } catch (IOException e) {
                    System.out.println("Terjadi kesalahan karena : " + e.getMessage());
                }
            }
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        isEditing = false;
        backToMenu();
    }

    static void deleteToDoList() throws IOException, InterruptedException {
        isEditing = true;
        showToDoList();

        System.out.println("-------------------------------");
        System.out.print("Pilih indeks> ");
        int index = Integer.parseInt(input.nextLine());

        try {
            if (index > todoLists.size()) {
                throw new IndexOutOfBoundsException("Kamu memasukan data yang salah!!");
            } else {
                System.out.println("Kamu akan menghapus: ");
                System.out.println(String.format("[%d] %s", index, todoLists.get(index)));
                System.out.println("Apa kamu yakin??");
                System.out.println("Jawab (y/t): ");
                String jawab = input.nextLine();

                if (jawab.equalsIgnoreCase("y")) {
                    todoLists.remove(index);

                    try {
                        FileWriter fileWriter = new FileWriter(fileName, false);

                        for (String data : todoLists) {
                            fileWriter.append(String.format("%s%n", data));
                        }
                        fileWriter.close();

                        System.out.println("Berhasil dihapus!!");
                    } catch (IOException e) {
                        System.out.println("Terjadi kesalahan karena : "+ e.getMessage());
                    }
                }
            }
        } catch (Exception e){
            System.out.println(e.getMessage());
        }

        isEditing = false;
        backToMenu();
    }
}
