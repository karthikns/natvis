struct FrogGUID
{
    unsigned int data1;
    unsigned short data2;
    unsigned short data3;
    unsigned char data4[8];
};

int main()
{
    FrogGUID guid = {
        0xDEFACED0,
        0x0123,
        0xCAFE,
        {
            0xFA,
            0xCE,
            0xB0,
            0x01,
            0xC0,
            0x00,
            0x12,
            0x89,
        }
    };

    return 0;
}

// Visualizer Output: { DEFACED0-0123-CAFE-FACEB001C0001289 }
