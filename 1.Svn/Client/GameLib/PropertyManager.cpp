///Add in CPropertyManager::CPropertyManager()
#if defined(__BL_AUTO_LANTERN_EFFECT__)
	m_dwLanternCRC = m_dwLanternEffectCRC = 0xffffffff;
#endif

//Find
	DWORD dwCRC = pProperty->GetCRC();

///Add
#if defined(__BL_AUTO_LANTERN_EFFECT__)
	const std::string strFileName(pProperty->GetFileName());
	if (m_dwLanternCRC == 0xffffffff && strFileName.find("ob-b1-013-lamp02.prb") != std::string::npos)
		m_dwLanternCRC = dwCRC;
	else if (m_dwLanternEffectCRC == 0xffffffff && strFileName.find("fire_ob-b1-013-lamp02.mse.pre") != std::string::npos)
		m_dwLanternEffectCRC = dwCRC;
#endif