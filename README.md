# HPC
# Parallel Brute Force Algorithm
## Autores
El equipo será conformado por:
Daniel Enrique Hernández Stalhuth
- dehernands@eafit.edu.co  
- hsdaniele95@gmail.com  
Ricardo Ocampo Castro
- rocampo3@eafit.edu.co 
- rocampocastro604@gmail.com  
Alejandro Gil
- ggilmay@eafit.edu.co 
- lordbluebanana@gmail.com

### Problema o caso de estudio a resolver
En temas de seguridad existe un algoritmo conocido como Brute-Force (Fuerza bruta) generalmente usado para descifrar contraseñas (Crackear) que consiste en probar uno a uno caracteres sobre una posición específica  del espacio de la contraseña. A este uso del algoritmo se le conoce como Brute Force attack y es una de las formas más lentas y menos precisas de descifrar una clave, pues se debe ensayar cada una de las posibles opciones que hay disponibles en el arreglo de caracteres.

### Objetivos-y-alcance
Para este proyecto el equipo de trabajo se concentrará en mejorar el rendimiento de este algoritmo haciendo uso del paralelismo, con herramientas como OpenMP y MPI para lograr reducir tiempos de ejecución. El objetivo final sería lograr una relación inversamente proporcional entre los núcleos de la máquina y  el tiempo de ejecución.

### Requerimientos-técnicos
La programación en paralelo ofrece una herramienta computacional imprescindible para aprovechar el uso de múltiples procesadores y en la resolución de problemas que no pueden resolverse mediante técnicas clásicas. En el proceso de diseño de programas paralelos hay que tener en cuenta lo siguiente:

- Descomposición: involucra el proceso de dividir el problema y la solución en partes más pequeñas. Es decir, determinar qué parte del software realiza qué tarea.
- Comunicación: se debe determinar cómo se lleva a cabo la comunicación entre los distintos procesos o computadoras, cómo sabe un componente de software cuando otro terminó o falló, como se solicita un servicio a otro componente, que componente debe iniciar la ejecución, etc.
- Sincronización: se debe determinar el orden de ejecución de los componentes, si todos los componentes inician su ejecución simultáneamente, o alguno debe esperar mientras otros trabajan, etc.

De lo anterior es posible identificar los siguientes obstáculos que surgen al programar en paralelo: 
- Dividir el trabajo de forma eficiente y efectiva entre dos o más componentes del software
- Implementar una comunicación adecuada para entre los componentes
- Implementar la coordinación de la ejecución paralela de los componentes
- Manejar excepciones, errores y fallas que puedan surgir

Para todo lo mencionado, se deben tomar en cuento unos requerimientos mínimos para el funcionamiento correcto de la programación en paralelo:
- Requerimientos mínimos de hardware: Computador con mínimos 2 núcleos de procesador. para lograr evidenciar un cambio en el manejo de la paralelización entre cores.

### Plan-de-trabajo

Inicialmente se desarrollará el algoritmo Brute Force de manera serial, se tomarán los tiempos de ejecución para luego pasar a desarrollar el mismo algoritmo de manera paralela,  haciendo uso de OpenMP con lo que posteriormente se pasará a comparar estos tiempos para ver en qué casos sí es justificado el uso de paralelismo y en casos no. Con ello pasaremos a describir algunas conclusiones del proyecto.

### Compilación, ejecución y análisis
#### Paralelo
  Para el codigo en paralelo, la compilación en el terminal es la siguiente:
  - g++ -o main.exe BruteCrackParallel.cpp -fopenmp
  Para ejecutarse, se utiliza en el terminal:
  - ./main.exe
  En cuanto al análisis, cuando se hacen procesos muy pequeños es probable que el programa serial sea más eficiente ya que no tarda mucho el proceso en conseguir un resultado. Al ejecutar el programa en paralelo, trabaja de forma más eficiente debido a que divide los nucleos para trabajar y crackear la contraseña estipulada con una forma denominada fuerza bruta, teniendo dos o más nucleos buscando de forma simultánea la contraseña. Cuando el programa encuentra una secuencia de carácteres igual a la contraseña, el nucleo envía una señal que indica al programa a terminar la búsqueda y continuar con el programa demostrado cual es la contraseña.

### Referencias

- Violent python - A cookbook for hackers and forensic analysis
- Hacking Secret Ciphers with Python 
- Luz Weinbach, N. (2008). Paradigmas de programación en paralelo [Ebook]. Bahia Blanca, Argentina. Retrieved from http://repositoriodigital.uns.edu.ar/bitstream/123456789/2001/1/MgTesis%20Weinbach%20-%20Paradigmas%20de%20Programacion%20en%20Paralelo.pdf 
- Turmero, P. Metodología de desarrollo de programas paralelos. Retrieved 16 October 2019, from https://www.monografias.com/trabajos104/metodologia-desarrollo-programas-paralelos/metodologia-desarrollo-programas-paralelos.shtml 
- Rodriguez Arroyo, J. (2012). Uso de técnicas de paralelización para el algoritmo de los filtros de Kalman [Ebook]. Retrieved from https://e-archivo.uc3m.es/bitstream/handle/10016/16335/TFG_Javier_Rodriguez_Arroyo.pdf?sequence=1&isAllowed=y 

