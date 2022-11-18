// Object: SpecializationTreeAsset
// ClassId: 393
// RuntimeId: 60759
// TypeInfo: 0x0000000144D50D50
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/CString.h"
#include "../CasablancaShared/SpecializationItem.h"
#include "../CasablancaShared/SpecializationLink.h"
#include "../Global/Guid.h"
#include "../CasablancaShared/SpecializationRect.h"
#include "../CasablancaShared/AbstractRankReward.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SpecializationTreeAsset : public Core::DataContainerPolicyAsset {
        CString LeftHeaderSid; // 0x20
        CString RightHeaderSid; // 0x28
        CasablancaShared::SpecializationItem Item0; // 0x30
        CasablancaShared::SpecializationItem Item1; // 0x50
        CasablancaShared::SpecializationItem Item2; // 0x70
        CasablancaShared::SpecializationItem Item3; // 0x90
        CasablancaShared::SpecializationItem Item4; // 0xB0
        CasablancaShared::SpecializationItem Item5; // 0xD0
        CasablancaShared::SpecializationItem Item6; // 0xF0
        CasablancaShared::SpecializationItem Item7; // 0x110
        CasablancaShared::SpecializationItem Item8; // 0x130
        CasablancaShared::SpecializationItem Item9; // 0x150
        CasablancaShared::SpecializationItem Item10; // 0x170
        CasablancaShared::SpecializationItem Item11; // 0x190
        CasablancaShared::SpecializationItem Item12; // 0x1B0
        CasablancaShared::SpecializationItem Item13; // 0x1D0
        CasablancaShared::SpecializationItem Item14; // 0x1F0
        CasablancaShared::SpecializationItem Item15; // 0x210
        CasablancaShared::SpecializationItem Item16; // 0x230
        CasablancaShared::SpecializationItem Item17; // 0x250
        Array<CasablancaShared::SpecializationLink> Links; // 0x270
        Array<Guid> DefaultTalents; // 0x278
        CasablancaShared::SpecializationRect SpecTreeRect; // 0x280
        Array<CasablancaShared::AbstractRankReward> TierUnlockers; // 0x290
    }; // 0x298
    static_assert(sizeof(SpecializationTreeAsset) == 0x298);
}
#pragma pack(pop)