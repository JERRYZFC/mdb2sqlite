#ifndef __INCLUDED_INDEXSTATEMENTS_H__
#define __INCLUDED_INDEXSTATEMENTS_H__

#pragma once

#include <afxdao.h>
#include <vector>

class CIndexStatements
{
public: 
	static void Indexes(CDaoTableDef &TableDef, std::vector<CString> &IndexStatements, const CDaoTableDefInfo &tabledefinfo, CString *&sTableNames, const short &nTableCount, std::vector<CString> &UniqueFields, std::vector<CString> &CollateIndexFields, const bool &m_bCollateNoCaseIndexAdd, const bool &m_bTrimTextValues);
	static bool IndexFilter(const CDaoTableDefInfo &tabledefinfo, const CDaoIndexInfo &indexinfo, CString *&sTableNames, const short &nTableCount);
private:
	static bool IsIndexFieldText(CString sParrent , std::vector <CString> &CollateIndexFields);
};

#endif