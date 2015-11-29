//==============================================================================
//	Morse.hpp
//		���[���X�M���f�[�^������
//==============================================================================
#pragma once
#ifndef ___MORSE_HEADER___
#define ___MORSE_HEADER___
#include <string>
#include <map>
#include <vector>

#define �E false
#define �| true

const std::map<char, std::vector<bool >> ChangeTable = {
	{ '�',{ �E,�| } },
	{ '�',{ �E,�|,�E,�|, } },
	{ '�',{ �|,�E,�E,�E, } },
	{ '�',{ �|,�E,�|,�E, } },
	{ '�',{ �|,�E,�E } },
	{ '�',{ �E } },
	{ '�',{ �E,�E,�|,�E,�E } },

	{ '�',{ �E,�E,�|,�E, } },
	{ '�',{ �|,�|,�E } },
	{ '�',{ �E,�E,�E,�E, } },
	{ '�',{ �|,�E,�|,�|,�E } },
	{ '�',{ �E,�|,�|,�|, } },
	
	{ '�',{ �|,�E,�| } },
	{ '�',{ �E,�|,�E,�E, } },
	{ '�',{ �|,�| } },
	{ '�',{ �|,�E } },
	{ '�',{ �|,�|,�| } },
	{ '�',{ �|,�|,�|,�E, } },
	
	{ '�',{ �E,�|,�|,�E, } },
	{ '�',{ �|,�|,�E,�|, } },
	{ '�',{ �E,�|,�E } },
	{ '�',{ �E,�E,�E } },
	{ '�',{ �| } },
	
	{ '�',{ �E,�E,�| } },
//	{ '�',{ �E,�|,�E,�E,�| } },
	{ '�',{ �E,�E,�|,�|, } },
	{ '�',{ �E,�|,�E,�E,�E } },
	{ '�',{ �E,�E,�E,�|, } },
	{ '�',{ �E,�|,�| } },
	{ '�',{ �|,�E,�E,�|, } },
	
	{ '�',{ �|,�E,�|,�|, } },
	{ '�',{ �|,�|,�E,�E, } },
	{ '�',{ �|,�|,�|,�|, } },
	{ '�',{ �|,�E,�|,�|,�| } },
	{ '�',{ �E,�|,�E,�|,�| } },
	
	{ '�',{ �|,�|,�E,�|,�| } },
	{ '�',{ �|,�E,�|,�E,�| } },
	{ '�',{ �|,�E,�|,�E,�E } },
	{ '�',{ �|,�E,�E,�|,�| } },
	{ '�',{ �|,�E,�E,�E,�| } },
	{ '�',{ �E,�E,�|,�E,�| } },
	{ '�',{ �|,�|,�E,�|,�E } },
	
//	{ '�',{ �E,�|,�|,�E,�E } },
	{ '�',{ �|,�|,�E,�E,�| } },
	{ '�',{ �|,�E,�E,�|,�E } },
	{ '�',{ �E,�|,�|,�|,�E } },
	{ '�',{ �|,�|,�|,�E,�| } },
	
	{ '�',{ �E,�|,�E,�|,�E } },
	{ '�',{ �E,�E } },
	{ '�',{ �E,�E,�|,�|,�E } },
	{ '-',{ �E,�|,�|,�E,�|} },

	{ 'A',{ �E,�| } },
	{ 'B',{ �|,�E,�E,�E } },
	{ 'C',{ �|,�E,�|,�E } },
	{ 'D',{ �|,�E,�E } },
	{ 'E',{ �E } },
	{ 'F',{ �E,�E,�|,�E } },
	{ 'G',{ �|,�|,�E } },
	{ 'H',{ �E,�E,�E,�E } },
	{ 'I',{ �E,�E } },
	{ 'J',{ �E,�|,�|,�| } },
	{ 'K',{ �|,�E,�| } },
	{ 'L',{ �E,�|,�E,�E } },
	{ 'M',{ �|,�| } },
	{ 'N',{ �|,�E } },
	{ 'O',{ �|,�|,�| } },
	{ 'P',{ �E,�|,�|,�E } },
	{ 'Q',{ �|,�|,�E,�| } },
	{ 'R',{ �E,�|,�E } },
	{ 'S',{ �E,�E,�E } },
	{ 'T',{ �| } },
	{ 'U',{ �E,�E,�|, } },
	{ 'V',{ �E,�E,�E,�| } },
	{ 'W',{ �E,�|,�| } },
	{ 'X',{ �|,�E,�E,�| } },
	{ 'Y',{ �|,�E,�|,�| } },
	{ 'Z',{ �|,�|,�E,�E } },
};

class Morse {
public:
	std::vector<bool> signal;
	int Init(std::string str) {
		for each (auto it in str){
			for each(auto b in ChangeTable.find(it)->second) {
				signal.push_back(b);
			}
		}
		return 0;
	}

	std::string ToString() {
		std::string str = "";
		for each (bool b in signal) {
			str += (b ? '�|' : '�E');
		}
		return str;
	}
};

#endif
// EOF