// Object: ArmorPlateData
// ClassId: 5195
// RuntimeId: 44051
// TypeInfo: 0x0000000144D01F20
#include "../CasablancaShared/BFWeaponData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ArmorPlateData : public CasablancaShared::BFWeaponData {
        Float32 ArmorAmount; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ArmorPlateData) == 0x30);
}
#pragma pack(pop)