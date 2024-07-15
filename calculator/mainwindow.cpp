#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <string>
#include <sstream>
#include <stack>
#include <cmath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

double applyOperation(double a, double b, char op) {
    switch (op) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    }
    return 0;
}

double evaluateExpression(const std::string& expression) {
    std::stack<double> values;
    std::stack<char> ops;

    for (size_t i = 0; i < expression.length(); ++i) {
        if (expression[i] == ' ')
            continue;

        if (isdigit(expression[i])) {
            std::stringstream ss;
            while (i < expression.length() && (isdigit(expression[i]) || expression[i] == '.')) {
                ss << expression[i++];
            }
            --i;
            double num;
            ss >> num;
            values.push(num);
        }
        else if (expression[i] == '(') {
            ops.push(expression[i]);
        }
        else if (expression[i] == ')') {
            while (ops.top() != '(') {
                double b = values.top(); values.pop();
                double a = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOperation(a, b, op));
            }
            ops.pop();
        }
        else if (isOperator(expression[i])) {
            while (!ops.empty() && precedence(ops.top()) >= precedence(expression[i])) {
                double b = values.top(); values.pop();
                double a = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOperation(a, b, op));
            }
            ops.push(expression[i]);
        }
    }

    while (!ops.empty()) {
        double b = values.top(); values.pop();
        double a = values.top(); values.pop();
        char op = ops.top(); ops.pop();
        values.push(applyOperation(a, b, op));
    }

    return values.top();
}

void MainWindow::on_btnAc_clicked()
{
    QString inputValue =  ui->MainOutput->text();
    inputValue.chop(1);
    ui->MainOutput->setText(inputValue);
}


void MainWindow::on_btnClear_clicked()
{
    ui->MainOutput->setText("");
}


void MainWindow::on_btnPower_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + "^";
    ui->MainOutput->setText(newText);
}


void MainWindow::on_btnDivision_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + "/";
    ui->MainOutput->setText(newText);
}


void MainWindow::on_btn7_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + "7";
    ui->MainOutput->setText(newText);
}


void MainWindow::on_btn8_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + "8";
    ui->MainOutput->setText(newText);
}


void MainWindow::on_btn9_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + "9";
    ui->MainOutput->setText(newText);
}


void MainWindow::on_btn4_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + "4";
    ui->MainOutput->setText(newText);
}


void MainWindow::on_btn5_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + "5";
    ui->MainOutput->setText(newText);
}


void MainWindow::on_btn6_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + "6";
    ui->MainOutput->setText(newText);
}


void MainWindow::on_btn1_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + "1";
    ui->MainOutput->setText(newText);
}


void MainWindow::on_btn2_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + "2";
    ui->MainOutput->setText(newText);
}


void MainWindow::on_btn3_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + "1";
    ui->MainOutput->setText(newText);
}


void MainWindow::on_btn0_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + "0";
    ui->MainOutput->setText(newText);
}


void MainWindow::on_btnDot_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + ".";
    ui->MainOutput->setText(newText);
}


void MainWindow::on_btnHash_clicked()
{

}


void MainWindow::on_btnEql_clicked()
{
    QString expression = ui->MainOutput->text();
    double result = evaluateExpression(expression.toStdString());
    ui->MainOutput->setText(QString::number(result));

}


void MainWindow::on_btnMinus_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + "-";
    ui->MainOutput->setText(newText);
}


void MainWindow::on_btnAdd_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + "+";
    ui->MainOutput->setText(newText);
}


void MainWindow::on_btnMultip_clicked()
{
    QString prevText = ui->MainOutput->text();
    QString newText = prevText + "*";
    ui->MainOutput->setText(newText);
}

