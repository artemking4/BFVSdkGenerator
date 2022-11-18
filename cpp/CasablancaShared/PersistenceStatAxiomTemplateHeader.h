// Object: PersistenceStatAxiomTemplateHeader
// ClassId: 5291
// RuntimeId: 14049
// TypeInfo: 0x0000000144DA2C00
#include "../CasablancaShared/PersistenceStatAxiomTemplatesTreeNodeBase.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistenceStatAxiomTemplateHeader : public CasablancaShared::PersistenceStatAxiomTemplatesTreeNodeBase {
        Array<CasablancaShared::PersistenceStatAxiomTemplatesTreeNodeBase> Nodes; // 0x18
    }; // 0x20
    static_assert(sizeof(PersistenceStatAxiomTemplateHeader) == 0x20);
}
#pragma pack(pop)