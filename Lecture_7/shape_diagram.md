#Diagram
```mermaid
classDiagram

    class Shape {
        + computeArea() : double
        + computePerimeter() : double
    }

    class Square {
        - side : double
        
    }

    class Circle {
        - radius : double
    }


    Shape <|-- Square
    Shape <|-- Circle
    