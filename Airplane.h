#pragma once

using namespace System;

// Define una clase de referencia Airplane en el espacio de nombres global
ref class Airplane
{
public:
    // Constructor público que inicializa un avión con un modelo y capacidad específicos
    Airplane(String^ model, int capacity);

    // Propiedad pública Id con métodos get y set
    property int Id {
        // Obtiene el valor de la propiedad privada id
        int get() {
            return id;
        }
        // Establece el valor de la propiedad privada id
        void set(int value) {
            id = value;
        }
    }

    // Propiedad pública Model con métodos get y set
    property String^ Model {
        // Obtiene el valor de la propiedad privada model
        String^ get() {
            return model;
        }
        // Establece el valor de la propiedad privada model
        void set(String^ value) {
            model = value;
        }
    }

    // Propiedad pública Capacity con métodos get y set
    property int Capacity {
        // Obtiene el valor de la propiedad privada capacity
        int get() {
            return capacity;
        }
        // Establece el valor de la propiedad privada capacity
        void set(int value) {
            capacity = value;
        }
    }

private:
    // Propiedad privada id para almacenar el identificador único del avión
    property int id;
    // Propiedad privada model para almacenar el modelo del avión
    property String^ model;
    // Propiedad privada capacity para almacenar la capacidad del avión
    property int capacity;
};

