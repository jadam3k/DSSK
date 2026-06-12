HardwareSerial PortA(1);
HardwareSerial PortB(2);

void setup() {
    portA.begin(115200, SERIAL_8N1, 4, 5);
    portA.begin(115200, SERIAL_8N1, 6, 7);
}


void loop() {
    while (PortA.available()) {
        PortB.write(PortA.read());
    }
        while (PortB.available()) {
        PortA.write(PortB.read());
    }
}