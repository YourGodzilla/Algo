item.stock) != EOF) {
        printf("name: %s, price: %d, stock: %d\n", item.name, item.price, item.stock);
    }

    fclose(file);