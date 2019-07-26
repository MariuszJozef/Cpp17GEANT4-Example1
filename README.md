# Cpp17GEANT4-Example1
The same as GEANT4-MinimalExample1-CompileRunWithEclipse but refactored into C++17 code, in particular: a unique pointer is used instead of a raw pointer so the new and delete operators are avoided.

A strange compilation error arises as shown below; it is resolved by writing the compiler flag "-std=c++17" after "``geant-config --cflags``", i.e. "``geant4-config --cflags`` -std=c++17".

<img width="1417" alt="image" src="https://user-images.githubusercontent.com/51378175/61918102-795ea100-af50-11e9-9688-f16cb2754296.png">

<img width="1108" alt="image" src="https://user-images.githubusercontent.com/51378175/61917899-875ff200-af4f-11e9-8ade-6ac628cb5657.png">

<img width="845" alt="image" src="https://user-images.githubusercontent.com/51378175/61918344-4e288180-af51-11e9-841e-90afa595fc08.png">

<img width="1281" alt="image" src="https://user-images.githubusercontent.com/51378175/61918490-db6bd600-af51-11e9-8d23-1f8470131d6c.png">

Running the project yields: 

<img width="1267" alt="image" src="https://user-images.githubusercontent.com/51378175/61918693-8d0b0700-af52-11e9-8b5e-4b79728c8e91.png">


