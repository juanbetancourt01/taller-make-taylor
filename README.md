# Taller - Make vs CMake

## Punto 2: Cuadro Comparativo Make vs CMake

### Características principales

| Aspecto | Make | CMake |
|---|---|---|
| Año | 1976 | 2000 |
| Función | Ejecuta comandos directamente | Genera sistemas de build |
| Lenguaje config | Makefile (reglas + shell) | CMakeLists.txt |
| Plataforma | Unix nativo | Multiplataforma |
| Scope | Cualquier lenguaje | Orientado a C/C++ |
| IDE support | Ninguno | CLion, VS, Xcode |
| Deps externas | Manual | find_package / FetchContent |
| Testing | No incluido | CTest + CPack |

### Fortalezas

| Make | CMake |
|---|---|
| Simple de aprender | Portabilidad real Win/Linux/macOS |
| Preinstalado en Linux/macOS | Escala en proyectos grandes |
| Sirve para cualquier lenguaje | Gestiona flags, includes y linking |
| Ideal como task runner | Integración con IDEs modernos |

### Debilidades

| Make | CMake |
|---|---|
| Sintaxis frágil (tabs obligatorios) | Curva de aprendizaje alta |
| Escala mal en proyectos grandes | Verboso y difícil de leer |
| Sin gestión de dependencias | Requiere instalación adicional |
| Portabilidad limitada entre versiones | Excesivo para proyectos simples |

### ¿Cuándo usar cada uno?

| Escenario | Usar |
|---|---|
| Proyecto C/C++ pequeño en Linux | Make |
| Proyecto C/C++ multiplataforma | CMake |
| Biblioteca que otros consumirán | CMake |
| Automatizar tareas (CI, deploy, docs) | Make |
| Proyecto con IDEs modernos | CMake |
| Monorepo grande con muchos módulos | CMake |
| Pipeline CI/CD o lenguaje distinto a C++ | Make |
| C++ con dependencias externas (Boost, Qt) | CMake |
| C++ + tareas adicionales | Ambos |

### Conclusión
- **Make** → simplicidad, velocidad, cualquier lenguaje, task runner
- **CMake** → C/C++ serio, multiplataforma, escalable, con IDE
- **Combinados** → CMake compila; Makefile como interfaz (`make build`, `make run`)

## Punto 1: Implementación con Make

### Comandos
\```bash
make build # Compila el proyecto
make run # Ejecuta el programa
make clean # Elimina el ejecutable
\```
