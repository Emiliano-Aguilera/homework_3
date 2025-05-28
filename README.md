# Paradigmas de Programación 
## Homework 3
### Compilación:
El repositorio contiene CMakeLists.txt que genera 3 rutinas de compilacion, una por ejercicio, usando todos los warnings.

 En `c_cpp_properties.json` se encuentra la configuración de la [extension C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) que está configurada para usar la misma configuración que CMake, por lo que ambos son consistentes.

Para poder compilar usando CMake, hay que tener la extensión ["CMakeTools"](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools), que permite compilar y correr el ejecutable usando el botón que se encuentra en la esquina inferior izquierda. El de la esquina superior derecha corresponde al de la extensión C/C++ y no usa la compilación de CMake, por lo que no sirve. La configuracion de las rutinas de compilacion se encuentra en `CMakeLists.txt`

### Compilacion sin extensiones:
#### Ejercicio 1
```
g++ -std=c++23 -Wall -Wextra -Wpedantic -Iex1/include ex1/src/main.cpp ex1/src/Posicion.cpp ex1/src/Presion.cpp ex1/src/MedicionBase.cpp ex1/src/SaveFlightData.cpp -o exe1
```
#### Ejercicio 2
```
g++ -std=c++23 -Wall -Wextra -Wpedantic -Iex2/include ex2/src/main.cpp ex2/src/Circulo.cpp ex2/src/Elipse.cpp ex2/src/Punto.cpp ex2/src/Rectangulo.cpp -o exe2
```
#### Ejercicio 3
```
g++ -std=c++23 -Wall -Wextra -Wpedantic -Iex3/include ex3/src/main.cpp ex3/src/ClaseEtiquetadora.cpp -o exe3
```