//Find in bool CArea::__Load_LoadObject(const char * c_szFileName)
		m_ObjectDataVector.push_back(ObjectData);

///Add
#if defined(__BL_AUTO_LANTERN_EFFECT__)
		if (ObjectData.dwCRC == CPropertyManager::Instance().GetLanternCRC())
		{
			ObjectData.dwCRC = CPropertyManager::Instance().GetLanternEffectCRC();

			if (!CPropertyManager::Instance().Get(ObjectData.dwCRC, &pProperty))
				TraceError(" CArea::LoadObject Property(%u) Cannot Load Lantern Effect ERROR", ObjectData.dwCRC);
			else
				m_ObjectDataVector.push_back(ObjectData);
		}
#endif