/* $Id$   *
 * (c) Copyright, eProsima, 2009.                                          *
 * All rights reserved.                                                    *    
 *                                                                         *
 * No duplications, whole or partial, manual or electronic, may be made    *
 * without express written permission.  Any such copies, or                *
 * revisions thereof, must display this notice unaltered.                  *
 * This code contains trade secrets of                                     *
 * eProsima (Proyectos y Sistemas de Mantenimiento S.L.)                   *
 *                                                                         *
 * modification history                                                    *
 * --------------------                                                    *
 * 1.0,29sep09,RodM Created                                                *
 * =====================================================================   *
 */

package com.eprosima.rpcdds.idl.tree;

public class OutputParam extends Param
{
	public OutputParam()
	{
		comment = "out";
	}
	
	public OutputParam(String typeName, String name)
	{
		this.typeName = typeName;
		this.name = name;
		comment = "out";
	}
	
	public boolean isInput()
	{
		return false;
	}
	
	public boolean isOutput()
	{
		return true;
	}
}
