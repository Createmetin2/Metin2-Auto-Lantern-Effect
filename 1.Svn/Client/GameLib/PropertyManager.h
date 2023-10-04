///Add
#include "../UserInterface/Locale_inc.h"

//Find
		CEterFileDict								m_fileDict;

///Add
#if defined(__BL_AUTO_LANTERN_EFFECT__)
	public:
		DWORD	GetLanternCRC() const { return m_dwLanternCRC; }
		DWORD	GetLanternEffectCRC() const { return m_dwLanternEffectCRC; }

	private:
		DWORD	m_dwLanternCRC;
		DWORD	m_dwLanternEffectCRC;
#endif