// Object: TextureUnlockPartData
// ClassId: 5168
// RuntimeId: 28219
// TypeInfo: 0x0000000144E81BC0
#include "../Core/DataContainer.h"
#include "../GameShared/TextureReference.h"

#pragma pack(push, 8)
namespace GameShared {
    class TextureUnlockPartData : public Core::DataContainer {
        GameShared::TextureReference TextureReference; // 0x18
    }; // 0x20
    static_assert(sizeof(TextureUnlockPartData) == 0x20);
}
#pragma pack(pop)