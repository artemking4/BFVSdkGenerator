// Object: BFSpectatorDepthOfFieldInputHandlerEntityData
// ClassId: 2132
// RuntimeId: 47601
// TypeInfo: 0x0000000144D42150
#include "../CasablancaShared/BFSpectatorInputHandlerEntityData.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSpectatorDepthOfFieldInputHandlerEntityData : public CasablancaShared::BFSpectatorInputHandlerEntityData {
        CasablancaShared::BFUIPlayerObject SelectedPlayer; // 0x28
    }; // 0x30
    static_assert(sizeof(BFSpectatorDepthOfFieldInputHandlerEntityData) == 0x30);
}
#pragma pack(pop)