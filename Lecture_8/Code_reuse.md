#Diagram
```mermaid

classDiagram

    class Shape {
        + color: string
        + describe(): void
    }

    class Circle {
        - radius: double
        + color: string
        + describe(): void
    }

    class Rectangle {
        - width: double
        - height: double
        + color: string
        + describe(): void
    }

    Shape <|-- Circle
    Shape <|-- Rectangle

