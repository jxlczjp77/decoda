//=============================================================================
//
// CriticalSectionLock.h
// 
// Created by Max McGuire (max@unknownworlds.com)
// Copyright 2007, Unknown Worlds Entertainment
//
//=============================================================================

#ifndef CRITICAL_SECTION_LOCK_H
#define CRITICAL_SECTION_LOCK_H

//
// Forward declarations.
//

class CriticalSection;

/**
 *
 */
class CriticalSectionLock
{

public:

    /**
     * Constructor.
     */
    CriticalSectionLock(CriticalSection& criticalSection);

    /**
     * Destructor.
     */
    ~CriticalSectionLock();

	void Lock();
	void UnLock();

private:
	bool m_bIsLock;
    CriticalSection&    m_criticalSection;

};

#endif