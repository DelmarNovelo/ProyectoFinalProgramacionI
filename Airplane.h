#pragma once

using namespace System;

// Define una clase de referencia Airplane en el espacio de nombres global
ref class Airplane
{
public:
    // Constructor p�blico que inicializa un avi�n con un modelo y capacidad espec�ficos
    Airplane(String^ model, int capacity);

    // Propiedad p�blica Id con m�todos get y set
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

    // Propiedad p�blica Model con m�todos get y set
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

    // Propiedad p�blica Capacity con m�todos get y set
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
    // Propiedad privada id para almacenar el identificador �nico del avi�n
    property int id;
    // Propiedad privada model para almacenar el modelo del avi�n
    property String^ model;
    // Propiedad privada capacity para almacenar la capacidad del avi�n
    property int capacity;
};

