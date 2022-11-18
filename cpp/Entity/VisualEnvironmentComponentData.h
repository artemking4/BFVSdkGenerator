// Object: VisualEnvironmentComponentData
// ClassId: 1874
// RuntimeId: 7800
// TypeInfo: 0x0000000144ED7270
#include "../Entity/GameComponentData.h"
#include "../Global/CString.h"

namespace Entity {
    class VisualEnvironmentComponentData : public Entity::GameComponentData {
        Array<CString> PropertyOverrides; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(VisualEnvironmentComponentData) == 0x90);
}