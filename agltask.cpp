#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QLabel label("Hello! My Name is Anuj Solanki. \n This is my AGL Task. \n I am a 3rd year CSE student at IIT Mandi. \n I am a proficient in App development and Machine Learning. \n I am looking forward to work with AGL. \n Thank You!");
    label.setAlignment(Qt::AlignCenter);
    label.setStyleSheet("font-size: 20pt;");

    QVBoxLayout layout;
    layout.addWidget(&label);

    QWidget window;
    window.setLayout(&layout);
    window.show();
    return app.exec();
}
