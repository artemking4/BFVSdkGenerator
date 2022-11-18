// Object: EmitterTagList
// ClassId: 486
// RuntimeId: 9243
// TypeInfo: 0x0000000144E2AAC0
#include "../Core/Asset.h"
#include "../Emitter/EmitterTag.h"

#pragma pack(push, 8)
namespace Emitter {
    class EmitterTagList : public Core::Asset {
        Array<Emitter::EmitterTag> Tags; // 0x20
    }; // 0x28
    static_assert(sizeof(EmitterTagList) == 0x28);
}
#pragma pack(pop)