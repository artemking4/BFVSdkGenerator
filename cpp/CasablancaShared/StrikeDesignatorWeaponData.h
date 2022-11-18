// Object: StrikeDesignatorWeaponData
// ClassId: 5226
// RuntimeId: 54976
// TypeInfo: 0x0000000144D408D0
#include "../CasablancaShared/BFWeaponData.h"
#include "../WeaponShared/LockingControllerData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class StrikeDesignatorWeaponData : public CasablancaShared::BFWeaponData {
        WeaponShared::LockingControllerData LockingController; // 0x28
        Float32 MaxRange; // 0x30
        Boolean CheckClearSky; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(StrikeDesignatorWeaponData) == 0x38);
}
#pragma pack(pop)