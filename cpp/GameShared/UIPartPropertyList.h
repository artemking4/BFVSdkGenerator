// Object: UIPartPropertyList
// ClassId: 5513
// RuntimeId: 46953
// TypeInfo: 0x0000000144E6CBD0
#include "../Core/DataContainer.h"
#include "../GameShared/UIPartProperties.h"

#pragma pack(push, 8)
namespace GameShared {
    class UIPartPropertyList : public Core::DataContainer {
        Array<GameShared::UIPartProperties> HudPropertyList; // 0x18
    }; // 0x20
    static_assert(sizeof(UIPartPropertyList) == 0x20);
}
#pragma pack(pop)