// Object: MessageEntityData
// ClassId: 2887
// RuntimeId: 42659
// TypeInfo: 0x0000000144E77240
#include "../Entity/EntityData.h"
#include "../GameShared/MessageEntityInfo.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class MessageEntityData : public Entity::EntityData {
        GameShared::MessageEntityInfo MessageInfo; // 0x20
        Boolean Enabled; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(MessageEntityData) == 0x30);
}
#pragma pack(pop)