// Object: CoverQueryData
// ClassId: 326
// RuntimeId: 39966
// TypeInfo: 0x0000000144C05860
#include "../Core/DataContainerPolicyAsset.h"
#include "../BattleAIShared/CoverSelectData.h"
#include "../BattleAIShared/CoverValidateData.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CoverQueryData : public Core::DataContainerPolicyAsset {
        BattleAIShared::CoverSelectData SelectionData; // 0x20
        BattleAIShared::CoverValidateData ValidationData; // 0x28
    }; // 0x30
    static_assert(sizeof(CoverQueryData) == 0x30);
}
#pragma pack(pop)