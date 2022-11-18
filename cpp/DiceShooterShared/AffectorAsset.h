// Object: AffectorAsset
// ClassId: 288
// RuntimeId: 34638
// TypeInfo: 0x0000000144DF3A70
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/Uint32.h"
#include "../DiceShooterShared/AffectorStackingPolicy.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class AffectorAsset : public Core::DataContainerPolicyAsset {
        Uint32 Identifier; // 0x20
        Uint32 TypeNameHash; // 0x24
        Array<Uint32> DescriptorIds; // 0x28
        DiceShooterShared::AffectorStackingPolicy StackingPolicy; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(AffectorAsset) == 0x38);
}
#pragma pack(pop)