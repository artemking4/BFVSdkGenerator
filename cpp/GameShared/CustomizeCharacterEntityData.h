// Object: CustomizeCharacterEntityData
// ClassId: 2566
// RuntimeId: 63262
// TypeInfo: 0x0000000144E76740
#include "../GameShared/CustomizeBaseEntityData.h"
#include "../GameShared/CustomizeCharacterData.h"

#pragma pack(push, 8)
namespace GameShared {
    class CustomizeCharacterEntityData : public GameShared::CustomizeBaseEntityData {
        GameShared::CustomizeCharacterData CustomizeCharacterData; // 0x28
    }; // 0x30
    static_assert(sizeof(CustomizeCharacterEntityData) == 0x30);
}
#pragma pack(pop)