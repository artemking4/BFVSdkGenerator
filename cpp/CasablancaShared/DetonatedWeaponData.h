// Object: DetonatedWeaponData
// ClassId: 5202
// RuntimeId: 27749
// TypeInfo: 0x0000000144D40050
#include "../CasablancaShared/BFWeaponData.h"
#include "../WeaponShared/LockingControllerData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/DetonationOrder.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DetonatedWeaponData : public CasablancaShared::BFWeaponData {
        WeaponShared::LockingControllerData LockingController; // 0x28
        Float32 Range; // 0x30
        Float32 TimeBetweenDetonations; // 0x34
        CasablancaShared::DetonationOrder DetonationOrder; // 0x38
        Boolean IndividualDetonation; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(DetonatedWeaponData) == 0x40);
}
#pragma pack(pop)