// Object: ArrayDamageAreaOverTimeEntityData
// ClassId: 3352
// RuntimeId: 16973
// TypeInfo: 0x0000000144D5B460
#include "../CasablancaShared/DamageAreaOverTimeBaseData.h"
#include "../Global/Float32.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../CasablancaShared/ArrayDoTData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class ArrayDamageAreaOverTimeEntityData : public CasablancaShared::DamageAreaOverTimeBaseData {
        Float32 DoTDuration; // 0x70
        Float32 DoTTickDuration; // 0x74
        GameShared::UnlockAssetBase UnlockAsset; // 0x78
        Array<CasablancaShared::ArrayDoTData> ArrayDoT; // 0x80
        Int32 ContinuousOnStayPriority; // 0x88
        Boolean ContinuousOnStay; // 0x8C
        char pad_0x8D[0x3];
    }; // 0x90
    static_assert(sizeof(ArrayDamageAreaOverTimeEntityData) == 0x90);
}
#pragma pack(pop)