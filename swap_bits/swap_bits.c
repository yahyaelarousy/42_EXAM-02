unsigned char swap_bits(unsigned char octet)
{
    unsigned char left = (octet & 0xF0) >> 4;
    unsigned char right = octet & 0x0F;
    return (right << 4) | left;
}

