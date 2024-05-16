#include <QApplication>
#include <QBrush>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QVector>

class Shape {
    public:
        virtual void draw(QGraphicsScene* scene) = 0;
};

class Rectangle : public Shape {
    private:
        double x, y, width, height;
        QColor fillColor;

    public:
        Rectangle(double x, double y, double width, double height, const QColor& fillColor)
            : x(x), y(y), width(width), height(height), fillColor{fillColor} 
        {}

        void draw(QGraphicsScene* scene) override {
            QGraphicsRectItem* rectItem = new QGraphicsRectItem(x, y, width, height);
            rectItem->setBrush(QBrush(fillColor));
            // scene->addRect(x, y, width, height);
            scene->addItem(rectItem);
        }
};

class Ellipse : public Shape {
    private:
        double x, y, width, height;
        QColor fillColor;

    public:
        Ellipse(double x, double y, double width, double height, const QColor& fillColor)
            : x(x), y(y), width(width), height(height), fillColor{fillColor} 
        {}

        void draw(QGraphicsScene* scene) override {
            QGraphicsEllipseItem* ellipseItem = new QGraphicsEllipseItem(x,y, width, height);
            ellipseItem->setBrush(QBrush(fillColor));
            // scene->addEllipse(x, y, width, height);
            scene->addItem(ellipseItem);
        }
};

class Group : public Shape {
    private:
        QVector<Shape*> shapes;

    public:
        void addShape(Shape* shape) {
            shapes.append(shape);
        }

        void draw(QGraphicsScene* scene) override {
            for (Shape* shape : shapes) {
                shape->draw(scene);
            }
        }
};

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    QGraphicsScene scene;
    QGraphicsView view(&scene);
    view.setSceneRect(0, 0, 800, 600);

    QColor redColor(Qt::red);
    QColor greenColor(Qt::green);

    Rectangle* rect1 = new Rectangle(50, 50, 100, 50, redColor);
    Ellipse* ellipse1 = new Ellipse(200, 100, 80, 60, greenColor);

    Group* group = new Group();
    group->addShape(rect1);
    group->addShape(ellipse1);

    rect1->draw(&scene);
    ellipse1->draw(&scene);
    group->draw(&scene);

    view.show();
    return app.exec();
}
