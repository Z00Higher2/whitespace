def remove_leading_spaces(line):
    # Find the position of the first non-whitespace character using isspace
    first_non_space_pos = 0
    while first_non_space_pos < len(line) and line[first_non_space_pos].isspace():
        first_non_space_pos += 1

    # Use slicing to create a substring starting from the first non-whitespace character to the end
    return line[first_non_space_pos:]

def main():
    # Get input string from the user
    lines = []
    while True:
        try:
            line = input("Enter a string (press Ctrl+C to exit): ")
            lines.append(remove_leading_spaces(line))
        except EOFError:
            break

    # Print the result
    for result_line in lines:
        print(result_line)

if __name__ == "__main__":
    main()
