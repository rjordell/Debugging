int main() {
    int *p = new int[10];
    p[9] = 1; // corrected from size - 1 = 10 - 1 = 9

    delete[] p; // deallocate the memory from the new above
    return 0;
}
