/* Generated By:JJTree: Do not edit this line. ASTsequence.java Version 4.1 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY= */
package com.eprosima.ddscs.idl.ast;

import com.eprosima.ddscs.idl.*;

////@SuppressWarnings("all")
public class ASTsequence extends SimpleNode {
  public ASTsequence(int id) {
    super(id);
  }

  public ASTsequence(IDLParser p, int id) {
    super(p, id);
  }


  /** Accept the visitor. **/
  public Object jjtAccept(IDLParserVisitor visitor, Object data) {
    return visitor.visit(this, data);
  }
}
/* JavaCC - OriginalChecksum=17f460711f08fc6c7c396ab1524ae7de (do not edit this line) */
