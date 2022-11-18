// Object: BFClassSpecialization
// ClassId: 433
// RuntimeId: 58849
// TypeInfo: 0x0000000144D5CAE0
#include "../GameShared/UnlockAssetBase.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFClassSpecialization : public GameShared::UnlockAssetBase {
        Array<GameShared::UnlockAssetBase> FieldSpecUnlocks; // 0x58
        Array<Uint32> FieldSpecUnlocksLevels; // 0x60
        Uint32 FieldSpecMaxActiveCount; // 0x68
        char pad_0x6C[0x4];
    }; // 0x70
    static_assert(sizeof(BFClassSpecialization) == 0x70);
}
#pragma pack(pop)