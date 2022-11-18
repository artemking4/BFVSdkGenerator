// Object: PersistenceStatAxiomTemplate
// ClassId: 5290
// RuntimeId: 45746
// TypeInfo: 0x0000000144DA2B80
#include "../CasablancaShared/PersistenceStatAxiomTemplatesTreeNodeBase.h"
#include "../DicePersistenceShared/StatAxiom.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistenceStatAxiomTemplate : public CasablancaShared::PersistenceStatAxiomTemplatesTreeNodeBase {
        DicePersistenceShared::StatAxiom Axiom; // 0x18
    }; // 0x30
    static_assert(sizeof(PersistenceStatAxiomTemplate) == 0x30);
}
#pragma pack(pop)