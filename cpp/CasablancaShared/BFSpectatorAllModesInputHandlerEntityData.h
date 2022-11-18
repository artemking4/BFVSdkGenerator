// Object: BFSpectatorAllModesInputHandlerEntityData
// ClassId: 2131
// RuntimeId: 47766
// TypeInfo: 0x0000000144D428D0
#include "../CasablancaShared/BFSpectatorInputHandlerEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSpectatorAllModesInputHandlerEntityData : public CasablancaShared::BFSpectatorInputHandlerEntityData {
        Boolean PlayerSelectionEnabled; // 0x28
        Boolean ResetEnabled; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(BFSpectatorAllModesInputHandlerEntityData) == 0x30);
}
#pragma pack(pop)