#Diagram
``` mermaid
classDiagram

    class Point{
        - x : float
        - y : float
    }

    class TwoDShape {
        # Point centerPoint
    }
    class Rectangles {
        - width : float
        - height : float
    }
    class Squares {
        - side : float
    }
    class Circles {
        - radius : float
    }

    TwoDShape --|> Rectangles
    TwoDShape --|> Squares
    TwoDShape --|> Circles