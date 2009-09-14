package com.eprosima.ddscs.idl.tree;

public abstract class Param  implements Named{
	protected String name;
	protected String type;

	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getType() {
		return type;
	}
	public void setType(String type) {
		this.type = type;
	}
}
