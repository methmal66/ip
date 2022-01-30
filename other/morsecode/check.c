short isInMorseCode(char* line) {
    char firstChar = *line;
    if (firstChar == '.' || firstChar == '-')
        return 1;
    return 0;
}