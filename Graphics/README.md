# Geometric Shape Calculator

This C++ program is a geometric shape calculator that allows users to calculate the area and perimeter of various geometric shapes. The program is built using object-oriented programming principles, featuring inheritance and polymorphism.

## Supported Shapes

The program supports the following shapes:
- Circle (Koło)
- Square (Kwadrat)
- Rectangle (Prostokąt)
- Rhombus (Romb)
- Pentagon (Pięciokąt)
- Hexagon (Sześciokąt)

## Building the Project

To compile the project, use the following command:
```bash
clang++ -std=c++11 Test.cpp Kolo.cpp Szesciokat.cpp Pieciokat.cpp Czworokat.cpp Romb.cpp Prostokat.cpp Kwadrat.cpp -o program
```

## Usage

The program is run from the command line with arguments specifying the shape type and its dimensions.

### Command Format

```bash
./program <shape_type> <dimensions...>
```

Where `shape_type` is one of:
- `o` - Circle (Koło)
- `c` - Quadrilateral (Czworokąt) - used for Square, Rectangle, and Rhombus
- `p` - Pentagon (Pięciokąt)
- `s` - Hexagon (Sześciokąt)

### Examples

1. Circle with radius 5:
```bash
./program o 5
```

2. Square with side 4:
```bash
./program c 4 4 4 4 90
```

3. Rectangle with sides 4 and 6:
```bash
./program c 4 4 6 6 90
```

4. Rhombus with side 5 and angle 60:
```bash
./program c 5 5 5 5 60
```

5. Pentagon with side 3:
```bash
./program p 3
```

6. Hexagon with side 6:
```bash
./program s 6
```

## Output

For each shape, the program will output:
1. The type of shape created
2. The area of the shape
3. The perimeter of the shape

## Error Handling

The program includes error handling for:
- Invalid shape types
- Negative dimensions
- Invalid number of parameters
- Invalid parameter types
- Invalid angles for quadrilaterals

## Project Structure

The project uses a hierarchy of classes:
- `Metody` - Abstract base class defining the interface
- `Figury` - Base class for all shapes
- `Czworokat` - Base class for quadrilaterals
- Specific shape classes (Kolo, Kwadrat, Prostokat, Romb, Pieciokat, Szesciokat)

Each shape class implements:
- Area calculation (`pole()`)
- Perimeter calculation (`obwod()`)
- Shape information display (`informacja()`) 