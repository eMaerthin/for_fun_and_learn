#pragma once

class Loop
{
    public:
Loop() {} 
Loop(int min, int max) : m_min(min), m_max(max) {}
void loop();

    private:
int m_min{1};
int m_max{100};


};