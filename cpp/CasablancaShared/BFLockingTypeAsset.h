// Object: BFLockingTypeAsset
// ClassId: 550
// RuntimeId: 14672
// TypeInfo: 0x0000000144D5AB60
#include "../GameShared/LockingTypeAsset.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFLockingTypeAsset : public GameShared::LockingTypeAsset {
        CString LockingIconName; // 0x20
        Float32 LockingBlinkInterval; // 0x28
        char pad_0x2C[0x4];
        CString TargetIconName; // 0x30
        CString ChevronIconName; // 0x38
        Uint32 LockingQuadSpacingStart; // 0x40
        Uint32 LockedQuadSpacing; // 0x44
        CString LockedText; // 0x48
        CString LockedGuidingText; // 0x50
        CString NotLockedGuidingText; // 0x58
    }; // 0x60
    static_assert(sizeof(BFLockingTypeAsset) == 0x60);
}
#pragma pack(pop)