# 🖨️ ft_printf - Because printf() is too mainstream

## 📝 Overview
The **ft_printf** project is a custom recreation of the standard C `printf` function. The goal is to learn how to handle **variadic arguments** in C using the `<stdarg.h>` library and to implement formatted output for various data types.

This project reinforces the "build your own tools" philosophy of the curriculum.

---

## 🛠️ Supported Conversions
My implementation handles the following format specifiers:

| Specifier | Description |
| :--- | :--- |
| `%c` | Prints a single character. |
| `%s` | Prints a string. |
| `%p` | Prints a void * pointer in hexadecimal format. |
| `%d` / `%i` | Prints a decimal (base 10) number. |
| `%u` | Prints an unsigned decimal (base 10) number. |
| `%x` | Prints a number in hexadecimal (base 16) lowercase format. |
| `%X` | Prints a number in hexadecimal (base 16) uppercase format. |
| `%%` | Prints a percent sign. |

---

## 🚀 Usage

### Compilation
The project includes a **Makefile** to compile the library:

```bash
make        # Compiles ft_printf and creates libftprintf.a
make clean  # Removes object files
make fclean # Removes object files and the library
make re     # Re-compiles the entire project
```

### Integration
To use ft_printf in your project:

Include the header: #include "ft_printf.h"

Compile your program with the library:
```bash
gcc main.c -L. -lftprintf -o my_program
```
### 🧠 Technical Highlights
Variadic Functions: Using va_start, va_arg, va_copy, and va_end to process an unknown number of arguments.

Hexadecimal Logic: Manually converting integers to base-16 strings for %x, %X, and %p.

Code Modularity: Each conversion type has its own dedicated file (e.g., ft_print_hex.c, ft_print_ptr.c) to keep the codebase clean and maintainable.

### Developed as part of the C programming curriculum.