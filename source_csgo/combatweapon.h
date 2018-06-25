#ifndef SOURCE_COMBATWEAPON_H
#define SOURCE_COMBATWEAPON_H

class CCSWeaponInfo
{
  public:
	OFFSET6432(char*, consoleName, 0x8, 0x4);
	OFFSET6432(char*, bulletType, 0x110, 0x80);
	OFFSET6432(CSWeaponType, iWeaponType, 0x140, 0xC8);
	OFFSET6432(int, iWeaponPrice, 0x144, 0xCC);
	OFFSET6432(int, iKillAward, 0x148, 0xD0);
	OFFSET6432(char*, szAnimationPrefix, 0x15C, 0xD4);
	OFFSET6432(float, flCycleTime, 0x158, 0xD8);
	OFFSET6432(int, iDamage, 0x16C, 0xEC);
	OFFSET6432(float, flArmorRatio, 0x170, 0xF0);
	OFFSET6432(float, flPenetration, 0x178, 0xF8);
	OFFSET6432(float, flRange, 0x184, 0x104);
	OFFSET6432(float, flRangeModifier, 0x188, 0x108);
	OFFSET6432(float, flMaxPlayerSpeed, 0x1B0, 0x12C);
	OFFSET6432(int, iZoomLevels, 0x240, 0x1BC);
};

class C_BaseCombatWeapon : public C_BaseEntity
{
  public:
	NETVAR(float_t, m_flNextPrimaryAttack, "DT_BaseCombatWeapon", "m_flNextPrimaryAttack");
	NETVAR(float_t, m_flNextSecondaryAttack, "DT_BaseCombatWeapon", "m_flNextSecondaryAttack");
	NETVAR(float_t, m_fLastShotTime, "DT_BaseCombatWeapon", "m_fLastShotTime");
	NETVAR(int, m_iClip1, "DT_BaseCombatWeapon", "m_iClip1");
	NETVAR(int, m_iClip2, "DT_BaseCombatWeapon", "m_iClip2");
	NETVAR(int, m_iPrimaryReserveAmmoCount, "DT_BaseCombatWeapon", "m_iPrimaryReserveAmmoCount");
	NETVAR(float_t, m_flRecoilIndex, "DT_WeaponCSBase", "m_flRecoilIndex");
	NETVAR(float_t, m_flPostponeFireReadyTime, "DT_WeaponCSBase", "m_flPostponeFireReadyTime");
	NETVAR(ItemDefinitionIndex, m_iItemDefinitionIndex, "DT_BaseAttributableItem", "m_iItemDefinitionIndex");

	VFuncPosixWin(CCSWeaponInfo*, GetCSWeaponData, 515, 445);
	VFuncPosixWin(float, GetInaccuracy, 538, 468);
	VFuncPosixWin(float, GetSpread, 507, 437);
	VFuncPosixWin(void, UpdateAccuracyPenalty, 539, 469);
};

#endif
