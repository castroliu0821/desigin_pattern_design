TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH = $$PWD/../../../ExampleCode/23_DesignPattern/AbstractFactoryDesginPattern/ \
INCLUDEPATH += $$PWD/../../../ExampleCode/23_DesignPattern/FactoryMethodDesignPattern/ \
INCLUDEPATH += $$PWD/../../../ExampleCode/23_DesignPattern/SimpleFactoryDesignPattern/ \
INCLUDEPATH += $$PWD/../../../ExampleCode/23_DesignPattern/ObserverDesignPattern/ \
INCLUDEPATH += $$PWD/../../../ExampleCode/23_DesignPattern/StateDesginPattern/ \
INCLUDEPATH += $$PWD/../../../ExampleCode/23_DesignPattern/ \
INCLUDEPATH += $$PWD/../../../ThirdPartLib/pugixml/ \

SOURCES += \
    ../../../ExampleCode/23_DesignPattern/AbstractFactoryDesginPattern/AbstractFactoryExample.cpp \
    ../../../ExampleCode/23_DesignPattern/FactoryMethodDesignPattern/FactoryMethod.cpp \
    ../../../ExampleCode/23_DesignPattern/FactoryMethodDesignPattern/FactoryMethodExample.cpp \
    ../../../ExampleCode/23_DesignPattern/SimpleFactoryDesignPattern/SimpleFactory.cpp \
    ../../../ExampleCode/23_DesignPattern/SimpleFactoryDesignPattern/SimpleFactoryExample.cpp \
    ../../../ExampleCode/23_DesignPattern/ObserverDesignPattern/DemoObserver.cpp \
    ../../../ExampleCode/23_DesignPattern/ObserverDesignPattern/DemoObserverExample.cpp \
    ../../../ExampleCode/23_DesignPattern/ObserverDesignPattern/DemoSubject.cpp \
    ../../../ExampleCode/23_DesignPattern/AbstractFactoryDesginPattern/AbstractFactory.cpp \
    ../../../ExampleCode/23_DesignPattern/AbstractFactoryDesginPattern/AbstractFactory_Product.cpp \
    ../../../ExampleCode/23_DesignPattern/FactoryMethodDesignPattern/FactoryMethod_Product.cpp \
    ../../../ExampleCode/23_DesignPattern/SimpleFactoryDesignPattern/SimpleFactory_Product.cpp \
    ../../../ExampleCode/23_DesignPattern/StateDesginPattern/State.cpp \
    ../../../ExampleCode/23_DesignPattern/StateDesginPattern/StateContext.cpp \
    ../../../ExampleCode/23_DesignPattern/StateDesginPattern/StateDesignPatternExample.cpp \
    ../../../ExampleCode/23_DesignPattern/DesignPatternExample.cpp \
    ../../../ExampleCode/DemoExample.cpp \
    ../../../ThirdPartLib/pugixml/pugixml.cpp \

HEADERS += \
    ../../../ExampleCode/23_DesignPattern/AbstractFactoryDesginPattern/*.h \
    ../../../ExampleCode/23_DesignPattern/FactoryMethodDesignPattern/*.h \
    ../../../ExampleCode/23_DesignPattern/SimpleFactoryDesignPattern/*.h \
    ../../../ExampleCode/23_DesignPattern/ObserverDesignPattern/*.h \
    ../../../ExampleCode/23_DesignPattern/DesignPatternExample.h \
    ../../../ExampleCode/23_DesignPattern/AbstractFactoryDesginPattern/AbstractFactory_Product.h \
    ../../../ExampleCode/23_DesignPattern/FactoryMethodDesignPattern/FactoryMethod_Product.h \
    ../../../ExampleCode/23_DesignPattern/StateDesginPattern/State.h \
    ../../../ExampleCode/23_DesignPattern/StateDesginPattern/StateContext.h \
    ../../../ExampleCode/23_DesignPattern/StateDesginPattern/StateDesignPatternExample.h \
    ../../../ThirdPartLib/pugixml/*.hpp \
    ../../../ThirdPartLib/pugixml/*.h \

include(deployment.pri)
qtcAddDeployment()
