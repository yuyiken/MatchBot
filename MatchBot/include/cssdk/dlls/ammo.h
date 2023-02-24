/*
*
*   This program is free software; you can redistribute it and/or modify it
*   under the terms of the GNU General Public License as published by the
*   Free Software Foundation; either version 2 of the License, or (at
*   your option) any later version.
*
*   This program is distributed in the hope that it will be useful, but
*   WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
*   General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program; if not, write to the Free Software Foundation,
*   Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*
*   In addition, as a special exception, the author gives permission to
*   link the code of this program with the Half-Life Game Engine ("HL
*   Engine") and Modified Game Libraries ("MODs") developed by Valve,
*   L.L.C ("Valve").  You must obey the GNU General Public License in all
*   respects for all of the code used other than the HL Engine and MODs
*   from Valve.  If you modify this file, you may extend this exception
*   to your version of the file, but you are not obligated to do so.  If
*   you do not wish to do so, delete this exception statement from your
*   version.
*
*/
#pragma once

class C9MMAmmo: public CBasePlayerAmmo
{
	DECLARE_CLASS_TYPES(C9MMAmmo, CBasePlayerAmmo);
public:
	virtual void Spawn() = 0;
	virtual void Precache() = 0;
	virtual BOOL AddAmmo(CBaseEntity *pOther) = 0;
};

class CBuckShotAmmo: public CBasePlayerAmmo
{
	DECLARE_CLASS_TYPES(CBuckShotAmmo, CBasePlayerAmmo);
public:
	virtual void Spawn() = 0;
	virtual void Precache() = 0;
	virtual BOOL AddAmmo(CBaseEntity *pOther) = 0;
};

class C556NatoAmmo: public CBasePlayerAmmo
{
	DECLARE_CLASS_TYPES(C556NatoAmmo, CBasePlayerAmmo);
public:
	virtual void Spawn() = 0;
	virtual void Precache() = 0;
	virtual BOOL AddAmmo(CBaseEntity *pOther) = 0;
};

class C556NatoBoxAmmo: public CBasePlayerAmmo
{
	DECLARE_CLASS_TYPES(C556NatoBoxAmmo, CBasePlayerAmmo);
public:
	virtual void Spawn() = 0;
	virtual void Precache() = 0;
	virtual BOOL AddAmmo(CBaseEntity *pOther) = 0;
};

class C762NatoAmmo: public CBasePlayerAmmo
{
	DECLARE_CLASS_TYPES(C762NatoAmmo, CBasePlayerAmmo);
public:
	virtual void Spawn() = 0;
	virtual void Precache() = 0;
	virtual BOOL AddAmmo(CBaseEntity *pOther) = 0;
};

class C45ACPAmmo: public CBasePlayerAmmo
{
	DECLARE_CLASS_TYPES(C45ACPAmmo, CBasePlayerAmmo);
public:
	virtual void Spawn() = 0;
	virtual void Precache() = 0;
	virtual BOOL AddAmmo(CBaseEntity *pOther) = 0;
};

class C50AEAmmo: public CBasePlayerAmmo
{
	DECLARE_CLASS_TYPES(C50AEAmmo, CBasePlayerAmmo);
public:
	virtual void Spawn() = 0;
	virtual void Precache() = 0;
	virtual BOOL AddAmmo(CBaseEntity *pOther) = 0;
};

class C338MagnumAmmo: public CBasePlayerAmmo
{
	DECLARE_CLASS_TYPES(C338MagnumAmmo, CBasePlayerAmmo);
public:
	virtual void Spawn() = 0;
	virtual void Precache() = 0;
	virtual BOOL AddAmmo(CBaseEntity *pOther) = 0;
};

class C57MMAmmo: public CBasePlayerAmmo
{
	DECLARE_CLASS_TYPES(C57MMAmmo, CBasePlayerAmmo);
public:
	virtual void Spawn() = 0;
	virtual void Precache() = 0;
	virtual BOOL AddAmmo(CBaseEntity *pOther) = 0;
};

class C357SIGAmmo: public CBasePlayerAmmo
{
	DECLARE_CLASS_TYPES(C357SIGAmmo, CBasePlayerAmmo);
public:
	virtual void Spawn() = 0;
	virtual void Precache() = 0;
	virtual BOOL AddAmmo(CBaseEntity *pOther) = 0;
};
